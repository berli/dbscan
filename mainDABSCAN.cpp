#if 1
//����ԭʼ������http://blog.csdn.net/k76853/article/details/50440182 
//zhouxianen,20170322
/*�޸ģ�
��1��ά����չ��ԭ������ֻ�ܶ�ȡ���������ʾ��ά�������ݣ���չ�󣬿��Դ���nά���ݣ�(2)�����ö�����ͣ�
��3��������init()������ʼ�������Ա����(Ч�ʽϵ�)��
��4������뾶eps�ж������޸�ΪС�ڵ��ڣ�����Ϊ��֤��matlab�汾��ʽһ�£�
��5)������������������ͣ�������������̨��ʾ��ͬʱ����Ϊclutering.txt�ļ��������ļ��Ķ�ȡ�ͱ����ʽ��ԭ����һ�¡�
�޸ĺ�������н����matlab�������루http://cn.mathworks.com/matlabcentral/fileexchange/52905-dbscan-clustering-algorithm�����н��һ�¡�
*/
/*
�����������ͣ�*.txt�ļ�
 
����txt�ļ���ʽ����(����ά�ȿ�����nά)��
1.400000,0.200000
1.400000,0.200000
1.300000,0.200000
 
������������̨�����ͬʱ���clustering.txt�ļ�
���txt�ļ���ʽ���£�
1.4,0.2,1
1.4,0.2,1
1.3,0.2,1
���е�����Ϊ�����ǣ�����֮���ö��ŷֿ�
���ļ��и�����������������ݺͲ��Խ��������������Դ��http://yarpiz.com/255/ypml110-dbscan-clustering��
��ά�������ݣ�dataPoint2.txt
��ά�������ݣ�dataPoint4.txt
��������clustering2.txt,clustering4.txt (eps=0.25,MinPts=3ʱ���)
 */
 
#include "DBSCAN.h"
 
int main(int argc, char** argv) 
{
	vector<point> dataset = openFile(argv[1]);
	//DBSCAN(dataset,0.25,3);
	DBSCAN(dataset,0.11,5);
	return 0;
}
 
#endif
