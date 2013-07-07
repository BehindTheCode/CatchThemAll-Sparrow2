//
//  CatchThemAllStage.h
//  CatchThemAll
//
//  Created by saumya ray on 11/14/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sparrow.h"

#import "TextureUtil.h"
#import "CTASprite.h"
#import "CTARow.h"
#import "InstructionSprite.h"
#import "SaumyaEvent.h"


@interface CatchThemAllStage : SPSprite
{
	SPJuggler *mJuggler;
	CTASprite *background;
	Boolean areOptionsOnScreen;
	int transitionAnimationCounter;

	InstructionSprite *infoSprite;
	Boolean isInstructionVisible;

	CTARow *rowOne;
	CTARow *rowTwo;
	CTARow *rowThree;
	CTARow *rowFour;
	CTARow *rowFive;
	CTARow *rowSix;
	CTARow *rowSeven;
	CTARow *rowEight;

	int counter1;
	int counter2;
	int counter3;
	int counter4;
	int counter5;
	int correctAnswerNum;

	int userCorrectAnswerCount;
	int userWrongAnswerCount;
	SPTextField *displayScore;
	SPTextField *displayMiss;
	SPTextField *displayTotalAttempted;

	int timerCounter;
	SPTextField *displayTimer;
}

@property (nonatomic, strong) SPJuggler *mJuggler;
@property (nonatomic, strong) CTASprite *background;
@property (nonatomic, assign) Boolean areOptionsOnScreen;
@property (nonatomic, assign) int transitionAnimationCounter;

@property (nonatomic, strong) InstructionSprite *infoSprite;
@property (nonatomic, assign) Boolean isInstructionVisible;

@property (nonatomic, strong) CTARow *rowOne;
@property (nonatomic, strong) CTARow *rowTwo;
@property (nonatomic, strong) CTARow *rowThree;
@property (nonatomic, strong) CTARow *rowFour;
@property (nonatomic, strong) CTARow *rowFive;
@property (nonatomic, strong) CTARow *rowSix;
@property (nonatomic, strong) CTARow *rowSeven;
@property (nonatomic, strong) CTARow *rowEight;

@property (nonatomic, assign) int counter1;
@property (nonatomic, assign) int counter2;
@property (nonatomic, assign) int counter3;
@property (nonatomic, assign) int counter4;
@property (nonatomic, assign) int counter5;
@property (nonatomic, assign) int correctAnswerNum;

@property (nonatomic, assign) int userCorrectAnswerCount;
@property (nonatomic, assign) int userWrongAnswerCount;
@property (nonatomic, strong) SPTextField *displayScore;
@property (nonatomic, strong) SPTextField *displayMiss;
@property (nonatomic, strong) SPTextField *displayTotalAttempted;
@property (nonatomic, assign) int timerCounter;
@property (nonatomic, strong) SPTextField *displayTimer;

- (id)initWithWidth:(float)width height:(float)height;

-(void)renderDefaultScreen;

-(void)advanceTime:(double)seconds;

-(void)transitIn;
-(void)transitOut;

-(void)onSingleTransitionInComplete;
-(void)onSingleTransitionOutComplete;


@end
