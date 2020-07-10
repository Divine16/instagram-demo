//
//  homeviewcontroller.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/9/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface homeviewcontroller : UIViewController
@property (weak, nonatomic) IBOutlet UIBarButtonItem *logoutb;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *photo;
@property (weak, nonatomic) IBOutlet UITableView *tableview;
//- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *,id> *)info;
@property UIRefreshControl * refreshcontrol;
@property NSArray *post;
-(void) fecth;


@end
