//
//  signup.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/9/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface signup : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *signusername;
@property (weak, nonatomic) IBOutlet UITextField *signpassword;
@property (weak, nonatomic) IBOutlet UIButton *signup;
-(void) registerUser;

@end
