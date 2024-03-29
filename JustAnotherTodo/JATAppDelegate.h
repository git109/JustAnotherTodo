//
//  JATAppDelegate.h
//  JustAnotherTodo
//
//  Created by Scott on 11/2/12.
//  Copyright (c) 2012 Stacks on Stacks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JATAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
