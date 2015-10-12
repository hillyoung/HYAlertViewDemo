//
//  ViewController.m
//  HYAlertViewDemo
//
//  Created by yanghaha on 15/10/12.
//  Copyright (c) 2015年 yanghaha. All rights reserved.
//

#import "ViewController.h"
#import "HYAlertView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)touchAlertButton:(UIButton *)sender {
    HYAlertView *alertView = [[HYAlertView alloc] initWithTitle:@"友情提醒" message:@"提醒信息" buttonTitles:@"取消", @"确定", nil];
    alertView.alertViewStyle = sender.tag;
    [alertView showWithCompletion:^(HYAlertView *alertView, NSInteger selectIndex) {
        NSLog(@"点击了%d", (int)selectIndex);
    }];
}

@end
