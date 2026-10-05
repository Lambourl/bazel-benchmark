#include "bench/fib.hpp"

// RE Benchmark TU 882 of 20000 (depth=28, stamp="default")
namespace bench_tu_882 {
constexpr unsigned long long result = ::bench::slow_fib<28, 882>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_882
