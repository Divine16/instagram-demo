//
//  instagramcell.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/10/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Post.h"
#import <ParseUI/ParseUI.h>

@interface instagramcell : UITableViewCell


@property (weak, nonatomic) IBOutlet PFImageView *imagev;
@property(strong,nonatomic) Post *p;
- (void)setPost:(Post *)post;
@end
