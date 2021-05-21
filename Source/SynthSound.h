/*
  ==============================================================================

    SynthSound.h
    Created: 21 May 2021 7:52:33pm
    Author:  emir.gocturk

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote(int midiNoteNumber) override { return true; }
    bool appliesToChannel(int midiChannel) override { return true; }

private:

};