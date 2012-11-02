//
//  JATFlipsideViewController.h
//  JustAnotherTodo
//
//  Created by Scott on 11/2/12.
//  Copyright (c) 2012 Stacks on Stacks. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JATFlipsideViewController;

@protocol JATFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(JATFlipsideViewController *)controller;
@end

@interface JATFlipsideViewController : UIViewController

@property (weak, nonatomic) id <JATFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
