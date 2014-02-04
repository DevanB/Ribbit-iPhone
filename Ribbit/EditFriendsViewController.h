//
//  EditFriendsViewController.h
//  Ribbit
//
//  Created by Devan Beitel on 2/3/14.
//  Copyright (c) 2014 Devan Beitel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;

@end
