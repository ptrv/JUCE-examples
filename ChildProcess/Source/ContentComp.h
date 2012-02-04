/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  4 Feb 2012 5:53:55pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_CONTENTCOMP_CONTENTCOMP_9ED949B1__
#define __JUCER_HEADER_CONTENTCOMP_CONTENTCOMP_9ED949B1__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "TextConsole.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ContentComp  : public Component,
                     public ButtonListener
{
public:
    //==============================================================================
    ContentComp ();
    ~ContentComp();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    TextButton* btRunChildProcess;
    TextConsole* console;
    TextButton* btClear;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    ContentComp (const ContentComp&);
    const ContentComp& operator= (const ContentComp&);
};


#endif   // __JUCER_HEADER_CONTENTCOMP_CONTENTCOMP_9ED949B1__
