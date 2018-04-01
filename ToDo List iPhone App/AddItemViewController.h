//
//  AddItemViewController.h
//  ToDo List iPhone App
//
//  Created by Jordan Anders on 2018-04-01.
//  Copyright © 2018 Jordan Anders. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

-(void) didSaveNewTodo:(NSString*)todoText;

@end

@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id  <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
