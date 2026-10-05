#include "bench/fib.hpp"

// RE Benchmark TU 19962 of 20000 (depth=28, stamp="default")
namespace bench_tu_19962 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19962>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19962
