/*
Description
通过上面两个例子，是不是基本了解了最简单的C程序？
不过老做这样的题目是不是没意思？
好，现在让我们搞点新鲜的花样——那就是鹦鹉学舌。你听过这么个幽默故事吗？
飞机上有一只猪和一只鹦鹉,鹦鹉对空姐说:"给爷来杯水”.
于是猪也学鹦鹉对空姐说:"给爷来杯水”.空姐很生气于是把他们扔了出去. 这时候鹦鹉对猪说;"傻了吧,爷会飞”。
Ok,笑话也看完了，那就请你写个程序完成鹦鹉学舌的功能吧。

Input
输入一个整数。

Output
输出刚才输入的那个整数，并换行。

Sample Input
1

Sample Output
1

Hint
啊，有点难度了吧？当然拉，如果输入的是2，你不要也输出1哦。
输入怎么做？啊！还问我哪，赶快去看看书吧，不就是用scanf函数吗？
输入的整数怎么存？当然是变量拉，可以用int a;定义一个变量a哦。如果还不清楚，赶快去加油看书吧。

Source
yhr
*/
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
	return 0;
}
