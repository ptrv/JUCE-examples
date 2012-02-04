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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "ContentComp.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ContentComp::ContentComp ()
    : btRunChildProcess (0),
      console (0),
      btClear (0)
{
    addAndMakeVisible (btRunChildProcess = new TextButton (L"btRunChildProcess"));
    btRunChildProcess->setButtonText (L"run child process");
    btRunChildProcess->addListener (this);

    addAndMakeVisible (console = new TextConsole());
    console->setName (L"console");

    addAndMakeVisible (btClear = new TextButton (L"btClear"));
    btClear->setButtonText (L"clear");
    btClear->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

ContentComp::~ContentComp()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (btRunChildProcess);
    deleteAndZero (console);
    deleteAndZero (btClear);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ContentComp::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ContentComp::resized()
{
    btRunChildProcess->setBounds (16, 32, 150, 24);
    console->setBounds (24, 80, 552, 296);
    btClear->setBounds (424, 32, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void ContentComp::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == btRunChildProcess)
    {
        //[UserButtonCode_btRunChildProcess] -- add your button handler code here..

    	ChildProcess child;

    	String processStr = "echo Running from " + String(ProjectInfo::projectName) + " application";

    	if(child.start(processStr))
    	{
    		const String result (child.readAllProcessOutput());

    		child.waitForProcessToFinish (60 * 1000);

    		console->addLine(result);
    	}

        //[/UserButtonCode_btRunChildProcess]
    }
    else if (buttonThatWasClicked == btClear)
    {
        //[UserButtonCode_btClear] -- add your button handler code here..
    	console->clear();
        //[/UserButtonCode_btClear]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ContentComp" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="1" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="btRunChildProcess" id="46d52dbc68a760ad" memberName="btRunChildProcess"
              virtualName="" explicitFocusOrder="0" pos="16 32 150 24" buttonText="run child process"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GENERICCOMPONENT name="console" id="b6dcc698c95734bf" memberName="console" virtualName=""
                    explicitFocusOrder="0" pos="24 80 552 296" class="TextConsole"
                    params=""/>
  <TEXTBUTTON name="btClear" id="2404e358590d5437" memberName="btClear" virtualName=""
              explicitFocusOrder="0" pos="424 32 150 24" buttonText="clear"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
