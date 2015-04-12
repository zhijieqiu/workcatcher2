namespace Singleton
{ 
    public class Singleton 
    { 
        //定义一个私有的静态全局变量来保存该类的唯一实例 
        private static Singleton singleton;

        //定义一个只读静态对象 
        //且这个对象是在程序运行时创建的 
        private static readonly object syncObject = new object();

        /// <summary> 
        /// 构造函数必须是私有的 
        /// 这样在外部便无法使用 new 来创建该类的实例 
        /// </summary> 
       private Singleton() 
        {

        }

       /// <summary> 
        /// 定义一个全局访问点 
        /// 设置为静态方法 
        /// 则在类的外部便无需实例化就可以调用该方法 
        /// </summary> 
        /// <returns></returns> 
        public static Singleton GetInstance() 
        { 
            //这里可以保证只实例化一次 
            //即在第一次调用时实例化 
            //以后调用便不会再实例化 

            //第一重 singleton == null 
            if (singleton == null) 
            { 
                lock (syncObject) 
                {

                            //第二重 singleton == null

                    if (singleton == null) 
                    { 
                        singleton = new Singleton(); 
                    } 
                } 
            } 
            return singleton; 
        } 
    } 
}
