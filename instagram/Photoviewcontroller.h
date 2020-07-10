//
//  Photoviewcontroller.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/10/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Photoviewcontroller : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *imagefieldforpost;
@property (weak, nonatomic) IBOutlet UIButton *buttonforcam;
-(void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *,id> *)info;
//@property NSMutableArray * array;
@property (weak, nonatomic) IBOutlet UITextField *caption;
@property UIImage * image;
- (UIImage *)resizeImage:(UIImage *)image withSize:(CGSize)size;
@end
