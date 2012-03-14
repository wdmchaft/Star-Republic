/**
 * SoundManager - A class to play sound effects and music
 */

#ifndef StarRepub_StoundManager_h
#define StarRepub_StoundManager_h

#include "Sound.h"
#include "Interfaces.h"
#include "SDL_include.h"

using namespace std;

/**
 * SoundManager Class, deals with playing various sounds and background music
 */
class SoundManager : public ISoundManager {
public:
   /** 
    * Constructor - loads sounds and initalizes music streams 
    */ 
   SoundManager();

   /**
    * Destructor - Removes all loaded sounds and shuts down 
    * music streams. 
    */
   ~SoundManager();
   
   /**
    * playSound - Plays a sound that the SoundManager has loaded. This
    * will play a random sound assoicated with this event once. 
    */
   void playSound(SoundEvent event);

   /**
    * playBackgroundSound - Plays a background sound. This should be used
    * for short, repeating sounds, not background music.
    */
   void playBackgroundSound(BackgroundSound sound);

   /** 
    * stopBackgroundSound - Stops a background that's already playing. 
    */
   void stopBackgroundSound(BackgroundSound sound); 
   
   /**
    * startMusic - Starts the background music. From here, the soundManager
    * will automatically load and play addational tracks until stopMusic is called
    */
   //void startMusic();

   /**
    * stopMusic - Stops all background music.
    */
   //void stopMusic();

   /**
    * tic - 
    */
      

private:
   vector<Sound*>  m_sounds[numSoundEvents]; 
   Sound* m_backgroundSounds[numBackgroundSounds];
   bool m_backgroundPlaying[numBackgroundSounds];
    
};

#endif
