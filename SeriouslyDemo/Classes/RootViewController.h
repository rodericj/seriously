/*  RootViewController.h */

/*  SeriouslyDemo
 *
 *  Created by Adam Duke on 1/10/11.
 *  Copyright 2011 None. All rights reserved.
 *
 */

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController {
	NSArray *tweets;
	NSDictionary *images;
}

@property (nonatomic, retain) NSArray *tweets;
@property (nonatomic, retain) NSDictionary *images;

@end
