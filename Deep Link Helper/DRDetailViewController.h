//
//  DRDetailViewController.h
//  Deep Link Helper
//
//  Created by Sibley on 9/28/13.
//  Copyright (c) 2013 Dr. Jon's Danger Ray, Inc. All rights reserved.
//

#import "DRLink.h"

@interface DRDetailViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) DRLink *link;
@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, weak) IBOutlet UITextField *titleTextField;
@property (nonatomic, weak) IBOutlet UITextField *urlTextField;


@end
