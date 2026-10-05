#include "bench/fib.hpp"

// RE Benchmark TU 7177 of 20000 (depth=28, stamp="default")
namespace bench_tu_7177 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7177>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7177
