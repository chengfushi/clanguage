////�ַ����ݹ����
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char a1[]="hello world";
//    char a2[]="###########";
//    int left = 0;
//    int right = strlen (a1) -1;
//    while (left<=right)
//    {
//        //˯��1000����
//        Sleep(1000);
//        //���a2�ַ�����
//        printf("%s\n",a2);
//        //��a2��˱�Ϊa1
//        a2[left] = a1[left];
//        a2[right] = a1[right];
//        left++;
//        right--;
//        printf("%s\n",a2);
//    }
//    return 0;
//}
//���ֲ���
//1 2 3 4 5 6 7 8 9 10
//�����Ҫ��7
//1��10ƽ������5
//5<7,��ô�ͽ�ѡ��2��10����ƽ����
//#include <stdio.h>
//int main()
//{
//    //����һ��˳������
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    //������Ҫ���ҵ�����
//    int key = 0;
//    printf("��������Ҫ���ҵ�����");
//    scanf("%d",&key);
//    //�������鳤��
//    int left = 0;
//    int right = sizeof (arr)/sizeof (arr[0])-1;
//    //��¼�м������±�
//    int mind = 0;
//    mind = left + (right-left)/2;
//    //����û�ҵ�
//    int find = 0;
//    while(left<=right)
//    {
//        mind = left + (right-left)/2;
//        if(arr[mind]>key)
//        {
//            //�м�ֵ���ˣ���ѡ���ұߵ�����
//            right = mind-1;
//        }
//        else if(arr[mind]<key)
//        {
//            //�м�ֵС�ˣ��Ǿ�ѡ��ߵ�����
//            left = mind+1;
//        }
//        else
//        {
//            find=1;
//            break;
//        }
//    }
//    if(find==1)
//    {
//        printf("�ҵ��ˣ��±���%d\n",mind);
//    }
//    else
//    {
//        printf("�Ҳ���\n");
//    }
//    return 0;
//}