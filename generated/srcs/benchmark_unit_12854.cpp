#include "bench/fib.hpp"

// RE Benchmark TU 12854 of 20000 (depth=28, stamp="default")
namespace bench_tu_12854 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12854>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12854
