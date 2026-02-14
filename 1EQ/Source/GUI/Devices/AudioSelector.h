/*
  ==============================================================================

    AudioSelctor.h
    Created: 14 Feb 2026 12:58:31pm
    Author:  Basile Sens

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class AudioSelector  : public juce::Component, juce::ChangeListener
{
public:
    AudioSelector(juce::AudioDeviceManager& deviceManager);
    ~AudioSelector() override;

    void resized() override;

private:
    void changeListenerCallback (juce::ChangeBroadcaster*) override;
    void refreshOutputs ();
private
    juce::AudioDeviceManager& mDeviceManager;
    juce::ListBox mChannelBox;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioSelector)
};
