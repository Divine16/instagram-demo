//
//  detaillviewcontroller.m
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/10/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import "detaillviewcontroller.h"

@interface detaillviewcontroller ()

@end

@implementation detaillviewcontroller

- (void)viewDidLoad {
    [super viewDidLoad];
      self.imageclip.file =self.popo[@"image"];
    [self.imageclip loadInBackground];
    self.captionclip.text=self.popo.caption;
    self.likesfield.text=[self.popo.likeCount stringValue];
    
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

    

    

    

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
