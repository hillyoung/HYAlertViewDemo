//
//  HYAlertViewView.h
//  HYAlertViewDemo
//
//  Created by yanghaha on 15/10/12.
//  Copyright (c) 2015年 yanghaha. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HYAlertViewViewStyle) {
    HYAlertViewViewStyleDefault = 0,
    HYAlertViewViewStyleSecureTextInput,
    HYAlertViewViewStylePlainTextInput,
    HYAlertViewViewStyleLoginAndPasswordInput
};

@interface HYAlertViewView : UIView

@property (nonatomic,strong) UILabel *msgLabel;

/**
 *消息字体大小(alertViewStyle为Default),否则为输入框字体大小
 **/
@property (nonatomic,strong) UIFont *messageFont;

@property (nonatomic) BOOL   seriesAlert;

@property (nonatomic) HYAlertViewViewStyle alertViewStyle;

/**
 *  @两个按钮纯文本显示（block回调方式）
 */
-(id)initWithTitle:(NSString *)title message:(NSString *)message buttonTitles:(NSString *)otherButtonTitles,... NS_REQUIRES_NIL_TERMINATION;

/**
 *  显示弹出框
 */
-(void)showWithCompletion:(void (^)(HYAlertViewView *alertView ,NSInteger selectIndex))completeBlock;

-(void)showInView:(UIView *)baseView completion:(void (^)(HYAlertViewView *alertView ,NSInteger selectIndex))completeBlock;

/**
 *获取指定的textField
 **/
- (UITextField *)textFieldAtIndex:(NSInteger)textFieldIndex;

@end
