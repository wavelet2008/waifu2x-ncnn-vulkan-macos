//
//  ViewController.h
//  waifu2x
//
//  Created by Cocoa Oikawa on 2019/4/25.
//  Copyright © 2019 Cocoa Oikawa. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DragDropImageView.h"

@interface ViewController : NSViewController

@property (weak) IBOutlet DragDropImageView *inputImageView;
@property (weak) IBOutlet DragDropImageView *outputImageView;
-(IBAction)waifu2x:(id)sender;
@property (weak) IBOutlet NSTextField *statusLabel;
@property (weak) IBOutlet NSProgressIndicator *waifu2xProgress;
@property (weak) IBOutlet NSTextField *noiseParameter;
@property (weak) IBOutlet NSTextField *scaleParameter;
@property (weak) IBOutlet NSTextField *tilesizeParameter;

@end

