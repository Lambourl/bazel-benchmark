#include "bench/fib.hpp"

// RE Benchmark TU 3880 of 20000 (depth=28, stamp="default")
namespace bench_tu_3880 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3880>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3880
