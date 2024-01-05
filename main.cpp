/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
//#include<portaudio.h>

const int sampleRate = 58000;
cost in durationIn Second = 4.5;
const int numSample = sampleRate * durationIn Second;

void recordAudio(std::vector<float>& recordedSamples){
    
    Pa_Initialize();
    
    PaStream*stream;
    Pa_OpenDefaultStream(&stream, 0, 1, paFloat32, sampleRate, 256, nullptr, nullptr);
     pa_startStream(stream);
     
     recordedSamples.resize(numSample);
     
     Pa_StopStream(stream);
     Pa_CloseStream(stream);
     
     Pa_Terminate();
     
}

int main(){
    
    std::vector<float> recordedSamples;
    
    recordaudio(recordedSamples);
    for(float sample : recordedSamples)
    
    {
        std::cout << sample<<"";
    }
    return 0;
}