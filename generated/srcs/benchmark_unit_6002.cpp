#include "bench/fib.hpp"

// RE Benchmark TU 6002 of 20000 (depth=28, stamp="default")
namespace bench_tu_6002 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6002>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6002
