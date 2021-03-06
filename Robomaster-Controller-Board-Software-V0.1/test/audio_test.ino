#include <esp32-hal-ledc.h>

#define TICK 200
/**
 * TODO Add score support, play more sound
 */

void setup()
{
    ledcSetup(0, 12000, 8);
    ledcAttachPin(A1, 0);

    // Intel Sound
    ledcWriteNote(0, NOTE_G, 5);
    delay(TICK);
    ledcWriteTone(0, 0);
    delay(TICK);
    ledcWriteNote(0, NOTE_G, 4);
    delay(TICK);
    ledcWriteNote(0, NOTE_C, 5);
    delay(TICK);
    ledcWriteNote(0, NOTE_G, 4);
    delay(TICK);
    ledcWriteNote(0, NOTE_D, 5);
    delay(4 * TICK);

    ledcWriteTone(0, 0);
    delay(1000);

    // Nokia tune
    ledcWriteNote(0, NOTE_E, 6);
    delay(TICK);
    ledcWriteNote(0, NOTE_D, 6);
    delay(TICK);
    ledcWriteNote(0, NOTE_Fs, 7);
    delay(TICK * 2);
    ledcWriteNote(0, NOTE_Gs, 7);
    delay(TICK * 2);

    ledcWriteNote(0, NOTE_Cs, 6);
    delay(TICK);
    ledcWriteNote(0, NOTE_B, 7);
    delay(TICK);
    ledcWriteNote(0, NOTE_D, 7);
    delay(TICK * 2);
    ledcWriteNote(0, NOTE_E, 7);
    delay(TICK * 2);

    ledcWriteNote(0, NOTE_B, 7);
    delay(TICK);
    ledcWriteNote(0, NOTE_A, 7);
    delay(TICK);
    ledcWriteNote(0, NOTE_Cs, 7);
    delay(TICK * 2);
    ledcWriteNote(0, NOTE_E, 7);
    delay(TICK * 2);

    ledcWriteNote(0, NOTE_A, 7);
    delay(TICK * 2 * 4 / 3);

    ledcWriteTone(0, 0);
    delay(1000); 

    // DJI tune
    ledcWriteTone(0, 4500);
    delay(TICK);
    ledcWriteTone(0, 1787);
    delay(TICK);
    ledcWriteTone(0, 2350);
    delay(TICK);

    ledcWriteTone(0, 0);
    delay(1000);
}

void loop()
{

}
