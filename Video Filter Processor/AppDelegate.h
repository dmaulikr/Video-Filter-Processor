//
//  AppDelegate.h
//  Video Filter Processor
//
//  Created by Franziska Neumeister on 01.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (nonatomic, assign) NSMenuItem* activeItem;
- (IBAction)setFilter:(NSMenuItem *)sender;
@end
