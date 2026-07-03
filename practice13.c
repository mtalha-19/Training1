#include <stdio.h>
#include <string.h>

// Include the correct header for sleep based on OS
#ifdef _WIN32
    #include <windows.h>
    // Define a cross-platform sleep function that takes seconds as a double
    void cross_sleep(double seconds) {
        Sleep((DWORD)(seconds * 1000));
    }
#else
    #include <time.h>
    #include <unistd.h>
    // Define a cross-platform sleep function that takes seconds as a double
    void cross_sleep(double seconds) {
        // use nanosleep for more precise sleep in C (requires <time.h>)
        struct timespec ts;
        ts.tv_sec = (time_t)seconds;
        ts.tv_nsec = (long)((seconds - ts.tv_sec) * 1000000000);
        nanosleep(&ts, NULL);
    }
#endif

// The function to print the lyrics with timing
void print_lyrics() {
    // Array of strings (char*) for the lyrics
    const char *lyrics[] = {
        "Mein ab kyun hosh may aata nahi?",
        "Sukoon yeh dil kyun paata nahi?",
        "Kyun toota khud se jo thaa vaada?",
        "Ke ab yeh ishq nibhaana nahi?",
        "Mein marrum tum se jo yeh chehra",
        "Dobara nazar milana nahi",
        "Yeh duniya jaanay mera dard",
        "Tujhe yeh nazar kyun aata nahi"
    };
    
    // Array of doubles for the delays (in seconds)
    const double delays[] = {
        0.3, 0.3, 0.4, 0.3, 0.3, 0.3, 0.8
    };

    int num_lines = sizeof(lyrics) / sizeof(lyrics[0]);
    int num_delays = sizeof(delays) / sizeof(delays[0]);
    
    // Print the title and initial pause
    printf("Pal Pal : \n");
    cross_sleep(1.2);

    for (int i = 0; i < num_lines; i++) {
        // Get the current line
        const char *line = lyrics[i];
        
        // --- Typewriter Effect ---
        // Iterate through each character in the current line
        for (int j = 0; j < strlen(line); j++) {
            // Print one character
            printf("%c", line[j]);
            // Force the output buffer to flush immediately so the character appears
            fflush(stdout); 
            // Pause for the typewriter effect (0.06 seconds)
            cross_sleep(0.06); 
        }

        // Print a newline character after the line is complete
        printf("\n");

        // --- Main Line Delay ---
        if (i < num_delays) {
            // Use the specific delay from the 'delays' array
            cross_sleep(delays[i]);
        } else {
            // Fallback delay if we run out of specific delays
            cross_sleep(0.8);
        }
    }
}

int main() {
    print_lyrics();
    return 0;
}