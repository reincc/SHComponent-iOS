//
//  SHViewController.m
//  SHComponent-iOS
//
//  Created by 496213867@qq.com on 05/25/2020.
//  Copyright (c) 2020 496213867@qq.com. All rights reserved.
//

#import "SHViewController.h"

@interface SHViewController ()

@end

@implementation SHViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(30, (self.view.frame.size.height - 45) / 2, self.view.frame.size.width - 60, 45)];
    label.text = @"hello SHComponent";
    label.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:label];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
