 #ifndef _MATH_HPP_
 #define _MATH_HPP
 #include <type_traits>

namespace max
{
    template <typename A>
    auto maximum(const A &x){
        static_assert(std::is_arithmetic_v<A>,"A must be arithmetic.");
        return x;
    }
    template <typename A,typename B,typename ...Ts>
    auto maximum(const A &x,const B &y,const Ts &... values){
        static_assert(std::is_arithmetic_v<A> && std::is_arithmetic_v<B>,"A & B must be arithmetic.");
        float max=x;
        if constexpr(sizeof ... (Ts)>=0){
            if (y>max){
                max=y;
                return maximum(max,values ...);
            }
            else {
                return maximum(max,values ...);
        }}

        return max;
    }
} // namespace max

namespace min
{
    template <typename A>
    auto minimum(const A &x){
        static_assert(std::is_arithmetic_v<A>,"A must be arithmetic.");
        return x;
    }
    template <typename A,typename B,typename ...Ts>
    auto minimum(const A &x,const B &y,const Ts &... values){
        static_assert(std::is_arithmetic_v<A> && std::is_arithmetic_v<B>,"A & B must be arithmetic.");
        float min=x;
        if constexpr(sizeof ... (Ts)>=0){
            if (y<min){
                min=y;
                return minimum(min,values ...);
            }
            else {
                return minimum(min,values ...);
        }}

        return min;
    }
} // namespace min
namespace diff
{
    template <typename A,typename B>
    auto diff_2(const A &x,const B &y){//function to check which argument is bigger and subtract the smaller one from it.
        if(x>y){
            return x-y;
        }
        else{
            return y-x;
        }
    }
    int sub(){
        return 0;
    }
    template <typename A>
    auto sub(const A &x){
        static_assert(std::is_arithmetic_v<A>,"A must be arithmetic.");
        return x;
    }
    template <typename A,typename B,typename ...Ts>
    auto sub(const A &x,const B &y,const Ts &... values){
        static_assert(std::is_arithmetic_v<A> && std::is_arithmetic_v<B>,"A & B must be arithmetic.");
        if constexpr(sizeof ... (Ts)>0)
        {
            auto diff=diff_2(x,y);
            return sub(diff,values ...);
        }
        else{
            return diff_2(x,y);
        }
       
    }
} // namespace diff




 #endif