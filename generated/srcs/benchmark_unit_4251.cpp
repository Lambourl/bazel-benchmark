#include "bench/fib.hpp"

// RE Benchmark TU 4251 of 20000 (depth=28, stamp="default")
namespace bench_tu_4251 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4251>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4251
