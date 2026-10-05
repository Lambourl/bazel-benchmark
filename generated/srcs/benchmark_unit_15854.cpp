#include "bench/fib.hpp"

// RE Benchmark TU 15854 of 20000 (depth=28, stamp="default")
namespace bench_tu_15854 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15854>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15854
