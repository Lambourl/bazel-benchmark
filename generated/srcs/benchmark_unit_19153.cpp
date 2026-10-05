#include "bench/fib.hpp"

// RE Benchmark TU 19153 of 20000 (depth=28, stamp="default")
namespace bench_tu_19153 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19153>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19153
