#include "bench/fib.hpp"

// RE Benchmark TU 2951 of 20000 (depth=28, stamp="default")
namespace bench_tu_2951 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2951>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2951
