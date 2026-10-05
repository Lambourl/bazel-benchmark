#include "bench/fib.hpp"

// RE Benchmark TU 17078 of 20000 (depth=28, stamp="default")
namespace bench_tu_17078 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17078>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17078
