/*
  ==============================================================================

    WallComponent.cpp
    Created: 11 Jan 2021 11:48:38pm
    Author:  Jhan

  ==============================================================================
*/

#include <JuceHeader.h>
#include "WallComponent.h"

using namespace juce;

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (juce::Graphics& g)
{
    Rectangle<float> wall(200,200,200,200);
    g.fillCheckerBoard(wall, 20, 10, Colours::blue, Colours::white);
    g.drawRect(wall);
   
    
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
