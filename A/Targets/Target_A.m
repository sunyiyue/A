//
//  Target_A.m
//  A
//
//  Created by 孙一越 on 2018/9/11.
//  Copyright © 2018年 孙一越. All rights reserved.
//

#import "Target_A.h"
#import "AViewController.h"
@implementation Target_A
- (UIViewController *)Action_viewController:(NSDictionary *)params
{
    AViewController *viewController = [[AViewController alloc] init];
    return viewController;
}
@end
