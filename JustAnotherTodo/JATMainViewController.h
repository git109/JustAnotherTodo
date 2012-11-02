//
//  JATMainViewController.h
//  JustAnotherTodo
//
//  Created by Scott on 11/2/12.
//  Copyright (c) 2012 Stacks on Stacks. All rights reserved.
//

#import "JATFlipsideViewController.h"

@interface JATMainViewController : UIViewController <JATFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
