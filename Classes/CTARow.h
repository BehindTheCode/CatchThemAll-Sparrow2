//
//  CTARow.h
//  CatchThemAll
//
//  Created by saumya ray on 11/17/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sparrow.h"

#import "TextureUtil.h"

#import "CTASprite.h"

@interface CTARow : SPSprite
{
	CTASprite *ctaOne;
	CTASprite *ctaTwo;
	CTASprite *ctaThree;
	CTASprite *ctaFour;
	CTASprite *ctaFive;
	CTASprite *ctaSix;
}

@property CTASprite *ctaOne;
@property CTASprite *ctaTwo;
@property CTASprite *ctaThree;
@property CTASprite *ctaFour;
@property CTASprite *ctaFive;
@property CTASprite *ctaSix;

-(id)initWithSprites;
-(void)makeDefaultSprites;

-(void)updateSpriteData;

@end
