//
//  MsgTitleCell.m
//  msgcopy
//
//  Created by Gavin on 15/7/9.
//  Copyright (c) 2015年 Gavin. All rights reserved.
//

#import "MsgTitleCell.h"

@implementation MsgTitleCell

- (void)awakeFromNib {
     [super awakeFromNib];
    // Initialization code
    self.lineLeftInset = 15;
    self.lineRightInset = 15;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
