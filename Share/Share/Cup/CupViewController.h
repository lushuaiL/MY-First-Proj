//
//  CupViewController.h
//  Share
//
//  Created by 鳞潜羽翔 on 2019/7/29.
//  Copyright © 2019 鳞潜羽翔. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CupViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property UITableView *tableView;
@property NSArray *imageNamearray;


@end

NS_ASSUME_NONNULL_END
