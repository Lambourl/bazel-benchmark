#include "bench/fib.hpp"

// RE Benchmark TU 7916 of 20000 (depth=28, stamp="default")
namespace bench_tu_7916 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7916>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7916
