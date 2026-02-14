/*
  ==============================================================================

    AudioSelctor.cpp
    Created: 14 Feb 2026 12:58:31pm
    Author:  Basile Sens

  ==============================================================================
*/

#include <JuceHeader.h>
#include "AudioSelector.h"

#include "../../Utils/AudioConstants.h"


//==============================================================================
AudioSelector::AudioSelector(juce::AudioDeviceManager& deviceManager)
    : mDeviceManager(deviceManager)
{
    jassert(mDeviceManager.getAvailableDeviceTypes().size());
    
    if (mDeviceManager.getCurrentAudioDevice()->getOutputChannelNames().size())
    {
        mChannelBox.
    }
}

AudioSelector::~AudioSelector()
{
}

void AudioSelector::resized()
{
}

void AudioSelector::changeListenerCallback(juce::ChangeBroadcaster* change){
    
}

void AudioSelector::refreshOutputs() {
    
}
