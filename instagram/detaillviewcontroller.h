//
//  detaillviewcontroller.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/10/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Photoviewcontroller.h"
#import "Post.h"
#import <ParseUI/ParseUI.h>

@interface detaillviewcontroller : UIViewController
@property (weak, nonatomic) IBOutlet PFImageView *imageclip;

@property (weak, nonatomic) IBOutlet UILabel *captionclip;
@property (strong, nonatomic) Post * popo;
@property (weak, nonatomic) IBOutlet UILabel *likesfield;


@end
