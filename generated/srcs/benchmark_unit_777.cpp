#include "bench/fib.hpp"

// RE Benchmark TU 777 of 20000 (depth=28, stamp="default")
namespace bench_tu_777 {
constexpr unsigned long long result = ::bench::slow_fib<28, 777>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_777
