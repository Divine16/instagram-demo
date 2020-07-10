//
//  Post.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/10/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Parse/Parse.h"

@interface Post : PFObject <PFSubclassing>
@property (nonatomic, strong) NSString *postID;
@property (nonatomic, strong) NSString *userID;
@property (nonatomic, strong) PFUser *author;

@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) PFFile *image;
@property (nonatomic, strong) NSNumber *likeCount;
@property (nonatomic, strong) NSNumber *commentCount;

+ (void) postUserImage: ( UIImage * _Nullable )image withCaption: ( NSString * _Nullable )caption withCompletion: (PFBooleanResultBlock  _Nullable)completion;
@end

