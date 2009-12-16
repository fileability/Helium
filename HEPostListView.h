//
//  HEPostListView.h
//  Helium
//
//  Created by Alex Gordon on 15/12/2009.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

@class HEPostListItemLayer;

@interface HEPostListView : NSView
{
	NSMutableArray *posts;
	
	HEPostListItemLayer *selectedLayer;
}

@end
